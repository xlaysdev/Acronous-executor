/* FUN_18019e000 @ 18019e000 */

ulonglong *
FUN_18019e000(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    param_1 = (ulonglong *)
              FUN_18019e000(param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe,param_4,param_5);
    param_2 = (ulonglong *)
              FUN_18019e000(param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4,param_5);
    param_3 = (ulonglong *)
              FUN_18019e000(param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4,param_5);
  }
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar2 < *param_3 != uVar1 < uVar2) {
    param_2 = param_3;
  }
  if (uVar1 < *param_3 != uVar1 < uVar2) {
    param_2 = param_1;
  }
  return param_2;
}


