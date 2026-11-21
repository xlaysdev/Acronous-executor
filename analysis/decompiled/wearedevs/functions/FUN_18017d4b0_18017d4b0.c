/* FUN_18017d4b0 @ 18017d4b0 */

undefined8 FUN_18017d4b0(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  FUN_1801dcec0(param_1[2]);
  plVar2 = (longlong *)param_1[1];
  LOCK();
  bVar5 = plVar2[1] == 1;
  if (bVar5) {
    plVar2[1] = -1;
  }
  UNLOCK();
  if ((bVar5) && (plVar2[1] = 1, *plVar2 == 1)) {
    lVar3 = param_1[1];
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    bVar1 = *(byte *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180264928);
    }
    plVar2 = (longlong *)*param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801e3970();
    }
    plVar2 = (longlong *)param_1[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801e3850();
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("threads should not terminate unexpectedly",0x29,
                &PTR_s_C__Users_burne__rustup_toolchain_180264910);
}


