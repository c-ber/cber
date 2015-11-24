
#ifndef CB_MARCO_H_
#define CB_MARCO_H_

/*******************  函数调用返回错误的宏  ******************************/
#ifndef CB_ERR_PRT
#define CB_ERR_PRT(f)                                       \
   do {                                                     \
      ret = f;                                              \
      if (CB_OK != ret) {                                   \
         printf("%s:%d error[%d]\n",__func__,__LINE__,ret); \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif

#ifndef CB_ERR_RET
#define CB_ERR_RET(f)                                       \
   do {                                                     \
      ret = f;                                              \
      if (CB_OK != ret) {                                   \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif

#ifndef CB_ERR_RET_CMD
#define CB_ERR_RET_CMD(f)                                   \
   do {                                                     \
      cb_code_t ret = f;                                    \
      if (CB_OK != ret) {                                   \
         return MDL_ERR(E_FAIL);                            \
      }                                                     \
   } while (0)
#endif

#ifndef CB_POINT_CHECK
#define CB_POINT_CHECK(p)                                   \
   do {                                                     \
      if (NULL == p){                                       \
         return CB_NULL_POINT;                              \
      }                                                     \
   } while (0)
#endif

#ifndef CB_PARAM_POINT_CHECK
#define CB_PARAM_POINT_CHECK(p)                         \
   do {                                                     \
      if (NULL == p){                                       \
         return CB_FUN_PARAM_ERR;                           \
      }                                                     \
   } while (0)
#endif

#ifndef CB_PARAM_LEN_CHECK
/* len < v */
#define CB_PARAM_LEN_CHECK(len, v)                          \
   do {                                                     \
      if ( len < v ){                                       \
         return CB_FUN_PARAM_ERR;                           \
      }                                                     \
   } while (0)
#endif

#ifndef CB_PARAM_EQ_CHECK
/* v1 == v2 */
#define CB_PARAM_EQ_CHECK(v1, v2)                           \
   do {                                                     \
      if ( v1 == v2 ){                                      \
         return CB_FUN_PARAM_ERR;                           \
      }                                                     \
   } while (0)
#endif

#ifndef CB_PARAM_NEQ_CHECK
/* v1 == v2 */
#define CB_PARAM_NEQ_CHECK(v1, v2)                          \
   do {                                                     \
      if ( v1 != v2 ){                                      \
         return CB_FUN_PARAM_ERR;                           \
      }                                                     \
   } while (0)
#endif

/******************* end  ***********************************************/


#endif /* CB_MARCO_H_ */
