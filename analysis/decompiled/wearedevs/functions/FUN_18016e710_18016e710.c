/* FUN_18016e710 @ 18016e710 */

undefined8 * FUN_18016e710(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar1 = (longlong *)(lVar3 + 0x70);
  if (*(char *)(lVar3 + 0xb8) != '\x01') {
    if (*(char *)(lVar3 + 0xb8) == '\x02') {
      *param_1 = 3;
      return param_1;
    }
    FUN_1801d8880(plVar1,FUN_18016d130);
    *(undefined1 *)(lVar3 + 0xb8) = 1;
  }
  if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261528);
  }
  *plVar1 = -1;
  iVar2 = *param_2;
  plVar4 = *(longlong **)(param_2 + 2);
  uVar9 = 1;
  LOCK();
  lVar8 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  if (iVar2 == 1) {
    if (lVar8 < 0) {
LAB_18016e81d:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  else {
    if (lVar8 < 0) goto LAB_18016e81d;
    uVar9 = 0;
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x78);
  uVar6 = *(undefined8 *)(lVar3 + 0x80);
  *(undefined8 *)(lVar3 + 0x78) = uVar9;
  *(longlong **)(lVar3 + 0x80) = plVar4;
  *plVar1 = *plVar1 + 1;
  if (*(longlong *)(lVar3 + 0x88) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("reached max `enter` depth",0x33,&PTR_s_C__Users_burne__cargo_registry_s_180261560
                  ,uVar6,uVar5,uVar6,uVar10);
  }
  lVar8 = *(longlong *)(lVar3 + 0x88) + 1;
  *(longlong *)(lVar3 + 0x88) = lVar8;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = lVar8;
  return param_1;
}


