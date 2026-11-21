/* FUN_180161010 @ 180161010 */

longlong * FUN_180161010(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  if (*param_1 != 0) {
    if ((int)*param_1 == 1) {
      piVar2 = (int *)param_1[2];
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      uVar3 = iVar1 - 1U & 0xbfffffff;
      plVar4 = (longlong *)(ulonglong)-uVar3;
      if (SBORROW4(0,uVar3)) {
LAB_180161078:
        plVar4 = (longlong *)FUN_180200760();
        return plVar4;
      }
    }
    else {
      piVar2 = (int *)param_1[1];
      if (((char)param_1[2] == '\0') &&
         (param_1 = (longlong *)0x0, (*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
        param_1 = (longlong *)FUN_180200a50();
        if ((char)param_1 == '\0') {
          *(undefined1 *)(piVar2 + 2) = 1;
        }
      }
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -0x3fffffff;
      UNLOCK();
      plVar4 = param_1;
      if (0x3fffffff < iVar1 + 0xc0000001U) goto LAB_180161078;
    }
  }
  return plVar4;
}


