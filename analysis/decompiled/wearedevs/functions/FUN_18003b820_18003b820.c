/* FUN_18003b820 @ 18003b820 */

void FUN_18003b820(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_1800a2ea0();
    lVar2 = lVar1 * 0x21 + 0x31;
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(*param_1 + lVar1 * -0x20 + -0x20,lVar2,0x10,param_4,param_1,uVar3);
    }
  }
  thunk_FUN_1801d3330(param_1,0x20,8);
  return;
}


