
#ifndef CB_CODE_H_
#define CB_CODE_H_

#include "cb_macro.h"
/*E ��������쳣   C ����ҵ�����쳣*/
typedef enum {
    CB_FUN_PARAM_ERR        = -3,         /* ���������Ƿ� */
    CB_NULL_POINT           = -2,         /* ��ָ����� */
    CB_E_FAIL               = -1,         /* ���������еĴ��󷵻� */
    CB_OK                   =  0,         /* �������� */
    CB_PARSE_RLT            =  1,         /* Э������������ */
    CB_TABLE_EMPTY          =  2,         /* �ձ���� */
    CB_TABLE_FULL           =  3,         /* �������� */
    CB_NOT_FOUND            =  4,         /* δ�ҵ� */
    CB_FOUND                =  5,         /* ���ҵ� */
    CB_SPACE_NOT_ENOUGH     =  6,         /* ָ��ָ��ĵ�ַ�ռ䲻�� */
    CB_NON_BCD_FORMAT       =  7,         /* ��TBCD��ʽ */
    CB_C_DEFALLT            =  0xff       /* Ĭ�ϴ����� */
}cb_code_t;

#endif /* CB_CODE_H_ */
