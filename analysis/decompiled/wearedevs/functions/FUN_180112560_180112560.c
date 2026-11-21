/* FUN_180112560 @ 180112560 */

/* WARNING: Removing unreachable block (ram,0x0001801125dc) */

ulonglong FUN_180112560(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong in_R10;
  byte unaff_R14B;
  bool bVar13;
  undefined1 local_31;
  
  lVar3 = param_1[2];
  uVar9 = FUN_180112aa0();
  if ((uVar9 & 1) != 0) {
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 != uVar4) {
      if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar5,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
      }
      lVar6 = *param_1;
      if (*(char *)(lVar6 + uVar5) == '/') {
        uVar10 = uVar5 + 1;
        param_1[2] = uVar10;
        if (uVar10 == uVar4) {
LAB_1801125e1:
          param_1[2] = uVar10;
          bVar7 = false;
          in_R10 = 0;
LAB_18011266f:
          bVar8 = bVar7;
          if (!bVar7) goto LAB_18011267c;
        }
        else {
          if (uVar4 <= uVar10) goto LAB_180112703;
          cVar2 = *(char *)(lVar6 + 1 + uVar5);
          uVar12 = uVar5 + 2;
          param_1[2] = uVar12;
          bVar11 = cVar2 - 0x30;
          if (9 < bVar11) goto LAB_1801125e1;
          bVar7 = true;
          in_R10 = 0;
          bVar8 = false;
          if (bVar11 < 0x21) {
            if (uVar12 != uVar4) {
              if (uVar12 < uVar4) {
                cVar2 = *(char *)(lVar6 + uVar12);
                param_1[2] = uVar5 + 3;
                unaff_R14B = cVar2 - 0x30;
                if (9 < unaff_R14B) goto LAB_180112628;
                bVar13 = true;
                uVar12 = uVar5 + 3;
                goto LAB_18011262f;
              }
LAB_180112700:
              uVar10 = uVar12;
LAB_180112703:
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar10,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
            }
LAB_180112628:
            param_1[2] = uVar12;
            bVar13 = false;
LAB_18011262f:
            in_R10 = (ulonglong)bVar11;
            if (!bVar13) goto LAB_18011266f;
            uVar1 = (uint)unaff_R14B + (uint)bVar11 * 10;
            in_R10 = (ulonglong)uVar1;
            if (uVar1 < 0x21) {
              if (uVar12 != uVar4) {
                if (uVar4 <= uVar12) goto LAB_180112700;
                cVar2 = *(char *)(lVar6 + uVar12);
                param_1[2] = uVar12 + 1;
                if ((byte)(cVar2 - 0x30U) < 10) goto LAB_18011267c;
              }
              param_1[2] = uVar12;
              goto LAB_18011266f;
            }
          }
LAB_18011267c:
          bVar7 = bVar8;
          param_1[2] = uVar10;
        }
        if (bVar7) {
          if (0x20 < (byte)in_R10) {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_31,
                          &DAT_18023ef28,&PTR_s_C__Users_burne__cargo_registry_s_18023f028);
          }
          in_R10 = ((ulonglong)((uint)in_R10 & 0x3f) << 0x28 | uVar9 & 0xffffffff00) >> 8;
          bVar11 = 1;
          goto LAB_1801126b1;
        }
      }
    }
  }
  param_1[2] = lVar3;
  bVar11 = 0;
LAB_1801126b1:
  return (ulonglong)bVar11 | in_R10 << 8;
}


