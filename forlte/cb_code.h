
#ifndef CB_CODE_H_
#define CB_CODE_H_

#include "cb_macro.h"
/*E 代表程序异常   C 代表业务功能异常*/
typedef enum {
    CB_FUN_PARAM_ERR        = -3,         /* 函数参数非法 */
    CB_NULL_POINT           = -2,         /* 空指针错误 */
    CB_E_FAIL               = -1,         /* 正常处理中的错误返回 */
    CB_OK                   =  0,         /* 正常返回 */
    CB_PARSE_RLT            =  1,         /* 协议解析结果错误 */
    CB_TABLE_EMPTY          =  2,         /* 空表操作 */
    CB_TABLE_FULL           =  3,         /* 表项已满 */
    CB_NOT_FOUND            =  4,         /* 未找到 */
    CB_FOUND                =  5,         /* 已找到 */
    CB_SPACE_NOT_ENOUGH     =  6,         /* 指针指向的地址空间不够 */
    CB_NON_BCD_FORMAT       =  7,         /* 非TBCD格式 */
    CB_C_DEFALLT            =  0xff       /* 默认处理码 */
}cb_code_t;

#endif /* CB_CODE_H_ */
