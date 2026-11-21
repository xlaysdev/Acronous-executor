/* FUN_18011c400 @ 18011c400 */

void FUN_18011c400(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *_Src;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong *plVar13;
  byte bVar14;
  byte bVar15;
  ulonglong local_70;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  uVar4 = *(ulonglong *)(param_1 + 0x40);
  plVar5 = *(longlong **)(param_1 + 0x38);
  bVar14 = 0;
  uVar10 = 0;
  _Src = param_2;
  if (uVar3 != 0) goto LAB_18011c470;
LAB_18011c450:
  uVar10 = uVar10 + 1;
  if (uVar3 <= uVar10) {
    return;
  }
  pbVar7 = (byte *)(uVar10 * 0x68 + lVar2);
LAB_18011c4e0:
  bVar14 = 2;
  if ((*pbVar7 & 1) != 0) {
    local_70 = *(ulonglong *)(pbVar7 + 8);
    bVar14 = 1;
  }
  pbVar11 = pbVar7 + 0x18;
  if (*(longlong *)(pbVar7 + 0x40) == 0) goto LAB_18011c4ce;
LAB_18011c505:
  lVar8 = *(longlong *)(pbVar7 + 0x48);
  _Src = *(longlong **)(pbVar7 + 0x50);
  do {
    lVar12 = param_2[2];
    plVar9 = (longlong *)(*param_2 - lVar12);
    if (plVar9 < _Src) {
      FUN_1801f6a80(param_2,lVar12,_Src,1,1);
      lVar12 = param_2[2];
LAB_18011c529:
      bVar15 = 0x2d;
      plVar9 = (longlong *)0x0;
      do {
        bVar1 = *(byte *)(lVar8 + (longlong)plVar9);
        if (lVar12 == *param_2) {
          FUN_180201770(param_2);
        }
        bVar15 = (bVar15 == 0x2d && (byte)(bVar1 + 0x9f) < 0x1a) << 5 ^ bVar1;
        *(byte *)(param_2[1] + lVar12) = bVar15;
        lVar12 = lVar12 + 1;
        param_2[2] = lVar12;
        plVar9 = (longlong *)((longlong)plVar9 + 1);
      } while (_Src != plVar9);
      plVar9 = (longlong *)(*param_2 - lVar12);
    }
    else if (_Src != (longlong *)0x0) goto LAB_18011c529;
    if (plVar9 < (longlong *)0x2) {
      FUN_1801f6a80(param_2,lVar12,2,1,1);
      lVar12 = param_2[2];
    }
    *(undefined2 *)(param_2[1] + lVar12) = 0x203a;
    lVar12 = lVar12 + 2;
    param_2[2] = lVar12;
    _Src = *(longlong **)(pbVar11 + 8);
    uVar6 = *(ulonglong *)(pbVar11 + 0x10);
    if ((ulonglong)(*param_2 - lVar12) < uVar6) {
      FUN_1801f6a80(param_2,lVar12,uVar6,1,1);
      lVar12 = param_2[2];
    }
    memcpy((void *)(param_2[1] + lVar12),_Src,uVar6);
    plVar13 = (longlong *)(lVar12 + uVar6);
    param_2[2] = (longlong)plVar13;
    plVar9 = plVar13;
    if ((ulonglong)(*param_2 - (longlong)plVar13) < 2) {
      FUN_1801f6a80(param_2,plVar13,2,1,1);
      plVar9 = (longlong *)param_2[2];
      _Src = plVar13;
    }
    *(undefined2 *)(param_2[1] + (longlong)plVar9) = 0xa0d;
    param_2[2] = (longlong)plVar9 + 2;
    if (bVar14 == 2) goto LAB_18011c450;
LAB_18011c470:
    uVar6 = local_70;
    if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar10,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_180243090);
    }
    pbVar7 = (byte *)(uVar10 * 0x68 + lVar2);
    if ((bVar14 & 1) == 0) goto LAB_18011c4e0;
    if (uVar4 <= local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_70,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_1802430a8);
    }
    bVar14 = 2;
    if ((char)plVar5[local_70 * 9 + 2] != '\0') {
      local_70 = plVar5[local_70 * 9 + 3];
      bVar14 = 1;
    }
    pbVar11 = (byte *)(plVar5 + uVar6 * 9 + 4);
    _Src = plVar5;
    if (*(longlong *)(pbVar7 + 0x40) != 0) goto LAB_18011c505;
LAB_18011c4ce:
    lVar8 = FUN_18011b9e0(pbVar7[0x48]);
  } while( true );
}


