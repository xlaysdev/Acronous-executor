/* FUN_18016df30 @ 18016df30 */

longlong FUN_18016df30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802618d0);
  }
  lVar4 = thunk_FUN_1801d8820(param_1 + 0x18);
  if (lVar4 != 0) {
    cVar3 = FUN_18016cf30(lVar4);
    if (cVar3 != '\a') {
      return lVar4;
    }
    if (((uint)lVar4 & 3) == 1) {
      uVar1 = *(undefined8 *)(lVar4 + -1);
      puVar2 = *(undefined8 **)(lVar4 + 7);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      }
      thunk_FUN_1801d3330(lVar4 + -1,0x18,8);
    }
  }
  return 0;
}


