/* FUN_1801e4f80 @ 1801e4f80 */

undefined8 FUN_1801e4f80(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_58 [2];
  longlong local_50;
  byte local_48;
  byte bStack_47;
  undefined6 uStack_46;
  
  if (*param_1 != 2) {
    uVar4 = FUN_1801eae2b(param_1,param_2);
    return uVar4;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x12);
  if (uVar6 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    do {
      FUN_1801f2ab0(local_58,lVar5,uVar6);
      bVar2 = local_48;
      lVar1 = local_50;
      if (local_58[0] != 1) {
        cVar3 = FUN_1801edcb0(local_50,CONCAT62(uStack_46,CONCAT11(bStack_47,local_48)),param_2);
        if (cVar3 == '\0') {
          return 0;
        }
        return 1;
      }
      uVar7 = (ulonglong)bStack_47;
      cVar3 = FUN_1801edcb0(&DAT_18028ec8e,3,param_2);
      if (cVar3 != '\0') {
        return 1;
      }
      if ((bVar2 & 1) == 0) {
        return 0;
      }
      uVar7 = lVar1 + uVar7;
      if (uVar6 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar7,uVar6,uVar6,&PTR_s_library_std_src_______backtrace__18028ecc8);
      }
      lVar5 = lVar5 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
  }
  return 0;
}


