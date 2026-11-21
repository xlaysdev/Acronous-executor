/* FUN_18013b9a0 @ 18013b9a0 */

void FUN_18013b9a0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (*param_1 == 2) {
    return;
  }
  iVar1 = param_1[0x10];
  if (iVar1 - 4U < 6) goto LAB_18013ba54;
  if (iVar1 == 2) {
    if ((char)param_1[0x12] == '\0') goto LAB_18013ba54;
    if ((char)param_1[0x12] == '\x01') {
      (**(code **)(*(longlong *)(param_1 + 0x14) + 0x20))
                (*(undefined8 *)(param_1 + 0x1a),*(undefined8 *)(param_1 + 0x16),
                 *(undefined8 *)(param_1 + 0x18),param_4,param_1,0xfffffffffffffffe);
      goto LAB_18013ba54;
    }
  }
  else {
    if ((iVar1 != 1) || ((char)param_1[0x12] == '\0')) goto LAB_18013ba54;
    if ((char)param_1[0x12] == '\x01') {
      (**(code **)(*(longlong *)(param_1 + 0x14) + 0x20))
                (*(undefined8 *)(param_1 + 0x1a),*(undefined8 *)(param_1 + 0x16),
                 *(undefined8 *)(param_1 + 0x18));
      goto LAB_18013ba54;
    }
  }
  if ((*(ulonglong *)(param_1 + 0x14) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x16),*(ulonglong *)(param_1 + 0x14),1);
  }
LAB_18013ba54:
  if (*(longlong *)(param_1 + 0x26) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x26) + 0x18))(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x2c) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2c) + 0x18))(*(undefined8 *)(param_1 + 0x2e));
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018013baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18))(*(undefined8 *)(param_1 + 0x32));
  return;
}


