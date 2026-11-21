/* FUN_18008f310 @ 18008f310 */

void FUN_18008f310(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (5 < iVar1 - 4U) {
    if (iVar1 == 2) {
      if (*(char *)(param_1 + 0x48) != '\0') {
        if (*(char *)(param_1 + 0x48) != '\x01') goto LAB_18008f38f;
        (**(code **)(*(longlong *)(param_1 + 0x50) + 0x20))
                  (*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(param_1 + 0x60),param_4,param_1,0xfffffffffffffffe);
      }
    }
    else if ((iVar1 == 1) && (*(char *)(param_1 + 0x48) != '\0')) {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        (**(code **)(*(longlong *)(param_1 + 0x50) + 0x20))
                  (*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(param_1 + 0x60));
      }
      else {
LAB_18008f38f:
        if ((*(ulonglong *)(param_1 + 0x50) & 0x7fffffffffffffff) != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x58),*(ulonglong *)(param_1 + 0x50),1);
          lVar2 = *(longlong *)(param_1 + 0x98);
          goto joined_r0x00018008f3b2;
        }
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
joined_r0x00018008f3b2:
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(param_1 + 0xa0));
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x18))(*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018008f3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  return;
}


