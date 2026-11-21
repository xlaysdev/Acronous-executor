/* FUN_18012aef0 @ 18012aef0 */

undefined8 * FUN_18012aef0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Buf2;
  size_t _Size;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 != 0) {
    uVar9 = FUN_180026950(param_2,param_3);
    uVar1 = *(ushort *)(param_2 + 0x58);
    uVar14 = (ulonglong)(uVar9 & uVar1);
    uVar4 = *(ulonglong *)(param_2 + 0x50);
    lVar5 = *(longlong *)(param_2 + 0x20);
    lVar6 = *(longlong *)(param_2 + 0x48);
    lVar12 = *param_3;
    _Buf2 = (void *)param_3[1];
    lVar8 = param_3[1];
    _Size = param_3[2];
    uVar13 = 0;
    uVar15 = 0;
    do {
      if (uVar4 <= uVar14) {
        uVar14 = 0;
      }
      if (uVar4 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      unaff_R15 = (ulonglong)*(ushort *)(lVar6 + uVar14 * 4);
      if ((unaff_R15 == 0xffff) ||
         (uVar2 = *(ushort *)(lVar6 + 2 + uVar14 * 4),
         ((int)uVar14 - (uint)(uVar2 & uVar1) & (uint)uVar1) < uVar15)) goto LAB_18012b07a;
      if (uVar2 == uVar9) {
        if (uVar3 <= unaff_R15) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(unaff_R15,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_180242e98);
        }
        lVar7 = *(longlong *)(lVar5 + 0x40 + unaff_R15 * 0x68);
        if ((lVar12 == 0) != (lVar7 != 0)) {
          lVar11 = unaff_R15 * 0x68 + lVar5;
          if (lVar7 == 0) {
            if (*(char *)(lVar11 + 0x48) == (char)lVar8) {
              param_1[2] = param_2;
              *param_1 = 1;
              param_1[1] = unaff_R15;
              return param_1;
            }
          }
          else if ((*(size_t *)(lVar11 + 0x50) == _Size) &&
                  (iVar10 = memcmp(*(void **)(lVar11 + 0x48),_Buf2,_Size), iVar10 == 0))
          goto code_r0x00018012b04e;
        }
      }
      uVar15 = uVar15 + 1;
      uVar14 = uVar14 + 1;
    } while( true );
  }
  lVar12 = *param_3;
  uVar13 = 0;
LAB_18012b07a:
  param_1[2] = param_2;
  *param_1 = uVar13;
  param_1[1] = unaff_R15;
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x20))(param_3[3],param_3[1],param_3[2]);
  }
  return param_1;
code_r0x00018012b04e:
  uVar13 = 1;
  goto LAB_18012b07a;
}


