/* FUN_1800efb50 @ 1800efb50 */

longlong FUN_1800efb50(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  lVar3 = -lVar4;
  if (SBORROW8(0,lVar4)) {
    lVar3 = param_1[1];
    if (((uint)lVar3 & 3) == 1) {
      uVar1 = *(undefined8 *)(lVar3 + -1);
      puVar2 = *(undefined8 **)(lVar3 + 7);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      }
      lVar4 = thunk_FUN_1801d3330(lVar3 + -1,0x18,8);
      return lVar4;
    }
  }
  else if (lVar4 != 0) {
    lVar4 = thunk_FUN_1801d3330(param_1[1],lVar4,1);
    return lVar4;
  }
  return lVar3;
}


