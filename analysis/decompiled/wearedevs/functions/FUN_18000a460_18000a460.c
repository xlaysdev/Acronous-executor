/* FUN_18000a460 @ 18000a460 */

void FUN_18000a460(int *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*param_1 != 3) {
    if ((10 < *(byte *)(param_1 + 0x2e)) && (*(longlong *)(param_1 + 0x32) != 0)) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x32),1);
    }
    FUN_18000adf0(param_1 + 0x18);
    FUN_18000b470(param_1);
    lVar1 = *(longlong *)(param_1 + 0x34);
    if (lVar1 != 0) {
      FUN_18002a190();
      thunk_FUN_1801d3330(lVar1,0x20,8);
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000a51b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                (*(undefined8 *)(param_1 + 0x3e),*(undefined8 *)(param_1 + 0x3a),
                 *(undefined8 *)(param_1 + 0x3c));
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x3a);
    puVar3 = *(undefined8 **)(param_1 + 0x3c);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      return;
    }
  }
  return;
}


