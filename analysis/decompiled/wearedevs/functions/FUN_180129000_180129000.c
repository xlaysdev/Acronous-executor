/* FUN_180129000 @ 180129000 */

undefined8 * FUN_180129000(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Buf2;
  size_t _Size;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  ushort uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  cVar10 = FUN_180129e00(param_2);
  if (cVar10 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x32) = 3;
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3[3],param_3[1],param_3[2]);
    }
    return param_1;
  }
  uVar11 = FUN_180026950(param_2,param_3);
  uVar1 = *(ushort *)(param_2 + 0xb);
  uVar14 = (ulonglong)(uVar11 & uVar1);
  uVar3 = param_2[10];
  lVar4 = param_2[9];
  lVar5 = param_2[4];
  uVar6 = param_2[5];
  lVar7 = *param_3;
  _Buf2 = (void *)param_3[1];
  lVar9 = param_3[1];
  _Size = param_3[2];
  uVar15 = 0;
  while( true ) {
    if (uVar3 <= uVar14) {
      uVar14 = 0;
    }
    if (uVar3 == 0) break;
    uVar16 = (ulonglong)*(ushort *)(lVar4 + uVar14 * 4);
    if ((uVar16 == 0xffff) ||
       (uVar2 = *(ushort *)(lVar4 + 2 + uVar14 * 4),
       ((int)uVar14 - (uint)(uVar2 & uVar1) & (uint)uVar1) < uVar15)) {
      lVar4 = *param_2;
      lVar5 = param_3[2];
      lVar9 = param_3[3];
      *param_1 = param_2;
      param_1[1] = lVar7;
      param_1[2] = _Buf2;
      param_1[3] = lVar5;
      param_1[4] = lVar9;
      param_1[5] = uVar14;
      *(ushort *)(param_1 + 6) = uVar11;
      *(bool *)((longlong)param_1 + 0x32) = lVar4 != 2 && 0x1ff < uVar15;
      return param_1;
    }
    if (uVar2 == uVar11) {
      if (uVar6 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar16,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180242df0);
      }
      lVar8 = *(longlong *)(lVar5 + 0x40 + uVar16 * 0x68);
      if ((lVar7 == 0) != (lVar8 != 0)) {
        lVar13 = uVar16 * 0x68 + lVar5;
        if (lVar8 == 0) {
          if (*(char *)(lVar13 + 0x48) == (char)lVar9) {
            *param_1 = param_2;
            param_1[1] = uVar14;
            param_1[2] = uVar16;
            *(undefined1 *)((longlong)param_1 + 0x32) = 2;
            return param_1;
          }
        }
        else if ((*(size_t *)(lVar13 + 0x50) == _Size) &&
                (iVar12 = memcmp(*(void **)(lVar13 + 0x48),_Buf2,_Size), iVar12 == 0)) {
          *param_1 = param_2;
          param_1[1] = uVar14;
          param_1[2] = uVar16;
          *(undefined1 *)((longlong)param_1 + 0x32) = 2;
          if (lVar7 == 0) {
            return param_1;
          }
          (**(code **)(lVar7 + 0x20))(param_3[3],_Buf2,_Size);
          return param_1;
        }
      }
    }
    uVar15 = uVar15 + 1;
    uVar14 = uVar14 + 1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


