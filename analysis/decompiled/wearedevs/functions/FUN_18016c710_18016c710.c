/* FUN_18016c710 @ 18016c710 */

longlong * FUN_18016c710(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261528);
  }
  *param_2 = -1;
  iVar2 = *param_3;
  plVar3 = *(longlong **)(param_3 + 2);
  lVar6 = 1;
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (iVar2 == 1) {
    if (-1 < lVar1) {
LAB_18016c75c:
      lVar1 = param_2[1];
      lVar4 = param_2[2];
      param_2[1] = lVar6;
      param_2[2] = (longlong)plVar3;
      *param_2 = *param_2 + 1;
      if (param_2[3] == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0("reached max `enter` depth",0x33,
                      &PTR_s_C__Users_burne__cargo_registry_s_180261560);
      }
      lVar6 = param_2[3] + 1;
      param_2[3] = lVar6;
      *param_1 = lVar1;
      param_1[1] = lVar4;
      param_1[2] = lVar6;
      return param_1;
    }
  }
  else if (-1 < lVar1) {
    lVar6 = 0;
    goto LAB_18016c75c;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


