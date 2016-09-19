

#  standard component Makefile header
sp              :=  $(sp).x
dirstack_$(sp)  :=  $(d)
d               :=  $(dir)

#  component specification

OBJS_$(d) :=  \
		$(OBJ_DIR)/dpi.o \
		$(OBJ_DIR)/util.o \
		$(OBJ_DIR)/encap.o \
		$(OBJ_DIR)/dpi_cmd.o


$(OBJS_$(d)):  CFLAGS_LOCAL := -g -O3 -Werror \
	-I$(d) \
	-I$(d)/../../common \
	-I$(d)/../../include \
	-I$(d)/../../npcp \
	-I$(d)/../../system \
	-I$(d)/../../src \
	-I$(d)/../ifgrp \
	-I$(d)/../../modules/stat\
	-I$(d)/../../parse \
	-I$(d)/../transmit \
	-L$(d)/libappengine.a \
	-DMC_PLATFORM=${MC_PLATFORM} -DSEMPTIAN_SIM=$(SIM) 

#  standard component Makefile rules

DEPS_$(d)   :=  $(OBJS_$(d):.o=.d)

CLEAN_LIST  :=  $(CLEAN_LIST) $(OBJS_$(d)) $(DEPS_$(d))

$(OBJ_DIR)/%.o:	$(d)/%.c
	$(COMPILE)

-include $(DEPS_$(d))

#  standard component Makefile footer

d   := $(dirstack_$(sp))
sp  := $(basename $(sp))

