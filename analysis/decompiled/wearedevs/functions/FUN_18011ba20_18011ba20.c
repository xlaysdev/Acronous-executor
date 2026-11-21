/* FUN_18011ba20 @ 18011ba20 */

void FUN_18011ba20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong _Size;
  ulonglong unaff_RSI;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong local_70;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  uVar3 = *(ulonglong *)(param_1 + 0x40);
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  uVar7 = (ulonglong)((uint)(uVar2 == 0) * 2);
  uVar12 = 0;
  if (uVar7 != 2) goto LAB_18011ba90;
LAB_18011ba70:
  uVar12 = uVar12 + 1;
  if (uVar2 <= uVar12) {
    return;
  }
  pbVar5 = (byte *)(uVar12 * 0x68 + lVar1);
LAB_18011bb00:
  uVar10 = 2;
  if ((*pbVar5 & 1) != 0) {
    local_70 = *(ulonglong *)(pbVar5 + 8);
    uVar10 = 1;
  }
  pbVar13 = pbVar5 + 0x18;
  _Size = uVar7;
  if (*(longlong *)(pbVar5 + 0x40) == 0) goto LAB_18011baed;
  do {
    pvVar6 = *(void **)(pbVar5 + 0x48);
    _Size = *(ulonglong *)(pbVar5 + 0x50);
    uVar7 = uVar10;
    while( true ) {
      lVar8 = *param_2;
      lVar9 = param_2[2];
      if ((ulonglong)(lVar8 - lVar9) < _Size) {
        FUN_1801f6a80(param_2,lVar9,_Size,1,1);
        lVar8 = *param_2;
        lVar9 = param_2[2];
      }
      lVar11 = param_2[1];
      memcpy((void *)(lVar9 + lVar11),pvVar6,_Size);
      lVar9 = lVar9 + _Size;
      param_2[2] = lVar9;
      if ((ulonglong)(lVar8 - lVar9) < 2) {
        FUN_1801f6a80(param_2,lVar9,2,1,1);
        lVar9 = param_2[2];
        lVar8 = *param_2;
        lVar11 = param_2[1];
      }
      *(undefined2 *)(lVar11 + lVar9) = 0x203a;
      lVar9 = lVar9 + 2;
      param_2[2] = lVar9;
      pvVar6 = *(void **)(pbVar13 + 8);
      uVar10 = *(ulonglong *)(pbVar13 + 0x10);
      if ((ulonglong)(lVar8 - lVar9) < uVar10) {
        FUN_1801f6a80(param_2,lVar9,uVar10,1,1);
        lVar11 = param_2[1];
        lVar9 = param_2[2];
      }
      memcpy((void *)(lVar11 + lVar9),pvVar6,uVar10);
      lVar9 = lVar9 + uVar10;
      param_2[2] = lVar9;
      if ((ulonglong)(*param_2 - lVar9) < 2) {
        FUN_1801f6a80(param_2,lVar9,2,1,1);
        lVar9 = param_2[2];
      }
      *(undefined2 *)(param_2[1] + lVar9) = 0xa0d;
      param_2[2] = lVar9 + 2;
      unaff_RSI = local_70;
      if (uVar7 == 2) goto LAB_18011ba70;
LAB_18011ba90:
      if (uVar2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar12,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_180243090);
      }
      pbVar5 = (byte *)(uVar12 * 0x68 + lVar1);
      if ((uVar7 & 1) == 0) goto LAB_18011bb00;
      if (uVar3 <= unaff_RSI) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(unaff_RSI,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_1802430a8);
      }
      lVar8 = uVar4 + unaff_RSI * 0x48;
      uVar10 = 2;
      local_70 = unaff_RSI;
      if (*(char *)(uVar4 + 0x10 + unaff_RSI * 0x48) != '\0') {
        local_70 = *(ulonglong *)(lVar8 + 0x18);
        uVar10 = 1;
      }
      pbVar13 = (byte *)(lVar8 + 0x20);
      _Size = uVar4;
      if (*(longlong *)(pbVar5 + 0x40) != 0) break;
LAB_18011baed:
      pvVar6 = (void *)FUN_18011b9e0(pbVar5[0x48]);
      uVar7 = uVar10;
    }
  } while( true );
}


