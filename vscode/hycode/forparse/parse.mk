CFLAGS_LOCAL += -I${OCTEON_ROOT}/u-boot_include_asm_arch

#  standard component Makefile header
sp              :=  $(sp).x
dirstack_$(sp)  :=  $(d)
d               :=  $(dir)

#  component specification

OBJS_$(d) :=  \
		 $(OBJ_DIR)/packet_entry.o \
		 $(OBJ_DIR)/packet_ethernet.o \
		 $(OBJ_DIR)/packet_outerip.o \
		 $(OBJ_DIR)/packet_l4.o \
		 $(OBJ_DIR)/packet_tcp.o \
		 $(OBJ_DIR)/packet_udp.o \
		 $(OBJ_DIR)/packet_sctp.o \
		 $(OBJ_DIR)/packet_gtpu.o \
		 $(OBJ_DIR)/packet_gtpv2c.o \
	     $(OBJ_DIR)/packet_gtpv1c.o \
		 $(OBJ_DIR)/packet_s1ap.o \
		 $(OBJ_DIR)/packet_diameter.o \
                 $(OBJ_DIR)/packet_nas.o \
		 $(OBJ_DIR)/packet_m3ua.o \
		 $(OBJ_DIR)/packet_sccp.o	\
		 $(OBJ_DIR)/packet_ranap.o\
		 $(OBJ_DIR)/gmm_nas_parse.o	


$(OBJS_$(d)):  CFLAGS_LOCAL := -g -Werror -O3 -I$(d) -I$(d)/../system \
	-I$(d)/../common \
	-I$(d)/../config \
	-I$(d)/../include \
	-I$(d)/../include/protocol \
	-I$(d)/../log \
	-I$(d)/../src \
	-I$(d)/../timer \
	-I$(d)/../npcp \
	-I$(d)/../lib \
	-I$(d)/../parse \
	-I$(d)/../modules/system \
	-I$(d)/../modules/interface \
	-I$(d)/../modules/ifgrp \
	-I$(d)/../modules/content \
	-I$(d)/../modules/stream \
	-I$(d)/../modules/stat \
	-I$(d)/../modules/transmit\
	-I$(d)/../modules/lte\
	-I$(d)/../modules/asn1 \
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

