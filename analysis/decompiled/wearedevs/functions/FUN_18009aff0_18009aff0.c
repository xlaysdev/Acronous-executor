/* FUN_18009aff0 @ 18009aff0 */

void FUN_18009aff0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if ((10 < *(byte *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 200) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 200),1);
  }
  FUN_18000adf0(param_1 + 0x60);
  FUN_18009a670(param_1);
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[1];
    if (lVar2 != 0) {
      FUN_1800a2ea0();
      lVar5 = lVar2 * 0x21 + 0x31;
      if (lVar5 != 0) {
        thunk_FUN_1801d3330(*plVar1 + lVar2 * -0x20 + -0x20,lVar5,0x10);
      }
    }
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018009b0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x20))
              (*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xe8),
               *(undefined8 *)(param_1 + 0xf0));
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  puVar4 = *(undefined8 **)(param_1 + 0xf0);
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(uVar3);
  }
  if (puVar4[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(uVar3,puVar4[1],puVar4[2]);
  return;
}


