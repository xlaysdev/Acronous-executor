/* FUN_18012a0e0 @ 18012a0e0 */

void FUN_18012a0e0(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  ulonglong uVar33;
  
  uVar33 = *(ulonglong *)(param_1 + 0x40);
  if (uVar33 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(param_2,uVar33,&PTR_s_C__Users_burne__cargo_registry_s_180242ee0);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0x38);
  puVar16 = (undefined4 *)(lVar5 + uVar33 * 0x48);
  do {
    uVar6 = *(ulonglong *)(lVar5 + 8 + param_2 * 0x48);
    cVar2 = *(char *)(lVar5 + 0x10 + param_2 * 0x48);
    uVar7 = *(ulonglong *)(lVar5 + 0x18 + param_2 * 0x48);
    if (*(char *)(lVar5 + param_2 * 0x48) == '\0') {
      if (cVar2 == '\0') {
        if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar6,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180242ef8);
        }
        *(undefined8 *)(lVar3 + uVar6 * 0x68) = 0;
      }
      else {
        if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar6,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180242f10);
        }
        if (*(char *)(lVar3 + uVar6 * 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180242f28);
        }
        *(ulonglong *)(uVar6 * 0x68 + lVar3 + 8) = uVar7;
        if (uVar33 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar7,uVar33,&PTR_s_C__Users_burne__cargo_registry_s_180242f40);
        }
        *(undefined8 *)(lVar5 + uVar7 * 0x48) = 0;
        *(ulonglong *)(lVar5 + 8 + uVar7 * 0x48) = uVar6;
      }
    }
    else if (cVar2 == '\0') {
      if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar7,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180242f58);
      }
      if (*(char *)(lVar3 + uVar7 * 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180242f70);
      }
      *(ulonglong *)(uVar7 * 0x68 + lVar3 + 0x10) = uVar6;
      if (uVar33 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar6,uVar33,&PTR_s_C__Users_burne__cargo_registry_s_180242f88);
      }
      *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x48) = 0;
      *(ulonglong *)(lVar5 + 0x18 + uVar6 * 0x48) = uVar7;
    }
    else {
      if (uVar33 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar6,uVar33,&PTR_s_C__Users_burne__cargo_registry_s_180242fa0);
      }
      *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x48) = 1;
      *(ulonglong *)(lVar5 + 0x18 + uVar6 * 0x48) = uVar7;
      if (uVar33 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar7,uVar33,&PTR_s_C__Users_burne__cargo_registry_s_180242fb8);
      }
      *(undefined8 *)(lVar5 + uVar7 * 0x48) = 1;
      *(ulonglong *)(lVar5 + 8 + uVar7 * 0x48) = uVar6;
    }
    pcVar1 = (char *)(lVar5 + param_2 * 0x48);
    uVar7 = *(ulonglong *)(pcVar1 + 0x10);
    uVar8 = *(ulonglong *)(pcVar1 + 0x18);
    lVar9 = *(longlong *)(pcVar1 + 0x20);
    uVar10 = *(undefined8 *)(pcVar1 + 0x28);
    uVar11 = *(undefined8 *)(pcVar1 + 0x30);
    uVar12 = *(undefined8 *)(pcVar1 + 0x38);
    uVar17 = puVar16[-0x12];
    uVar18 = puVar16[-0x11];
    uVar19 = puVar16[-0x10];
    uVar20 = puVar16[-0xf];
    uVar21 = puVar16[-0xe];
    uVar22 = puVar16[-0xd];
    uVar23 = puVar16[-0xc];
    uVar24 = puVar16[-0xb];
    uVar25 = puVar16[-10];
    uVar26 = puVar16[-9];
    uVar27 = puVar16[-8];
    uVar28 = puVar16[-7];
    uVar29 = puVar16[-6];
    uVar30 = puVar16[-5];
    uVar31 = puVar16[-4];
    uVar32 = puVar16[-3];
    *(undefined8 *)(pcVar1 + 0x40) = *(undefined8 *)(puVar16 + -2);
    uVar6 = uVar33 - 1;
    *(undefined4 *)pcVar1 = uVar17;
    *(undefined4 *)(pcVar1 + 4) = uVar18;
    *(undefined4 *)(pcVar1 + 8) = uVar19;
    *(undefined4 *)(pcVar1 + 0xc) = uVar20;
    *(undefined4 *)(pcVar1 + 0x10) = uVar21;
    *(undefined4 *)(pcVar1 + 0x14) = uVar22;
    *(undefined4 *)(pcVar1 + 0x18) = uVar23;
    *(undefined4 *)(pcVar1 + 0x1c) = uVar24;
    *(undefined4 *)(pcVar1 + 0x20) = uVar25;
    *(undefined4 *)(pcVar1 + 0x24) = uVar26;
    *(undefined4 *)(pcVar1 + 0x28) = uVar27;
    *(undefined4 *)(pcVar1 + 0x2c) = uVar28;
    *(undefined4 *)(pcVar1 + 0x30) = uVar29;
    *(undefined4 *)(pcVar1 + 0x34) = uVar30;
    *(undefined4 *)(pcVar1 + 0x38) = uVar31;
    *(undefined4 *)(pcVar1 + 0x3c) = uVar32;
    *(ulonglong *)(param_1 + 0x40) = uVar6;
    if (uVar6 != param_2) {
      if (uVar6 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(param_2,uVar33 - 1,&PTR_s_C__Users_burne__cargo_registry_s_180242fd0);
      }
      uVar13 = *(ulonglong *)(pcVar1 + 8);
      lVar14 = *(longlong *)(pcVar1 + 0x10);
      uVar15 = *(ulonglong *)(pcVar1 + 0x18);
      if (*pcVar1 == '\0') {
        if (uVar4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar13,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180242fe8);
        }
        if (*(char *)(lVar3 + uVar13 * 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180243000);
        }
        *(ulonglong *)(uVar13 * 0x68 + lVar3 + 8) = param_2;
      }
      else {
        if (uVar6 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar13,uVar33 - 1,&PTR_s_C__Users_burne__cargo_registry_s_180243018);
        }
        *(undefined8 *)(lVar5 + 0x10 + uVar13 * 0x48) = 1;
        *(ulonglong *)(lVar5 + uVar13 * 0x48 + 0x18) = param_2;
      }
      if (lVar14 == 0) {
        if (uVar4 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar15,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180243030);
        }
        if (*(char *)(lVar3 + uVar15 * 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180243048);
        }
        *(ulonglong *)(uVar15 * 0x68 + lVar3 + 0x10) = param_2;
      }
      else {
        if (uVar6 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar15,uVar33 - 1,&PTR_s_C__Users_burne__cargo_registry_s_180243060);
        }
        *(undefined8 *)(lVar5 + uVar15 * 0x48) = 1;
        *(ulonglong *)(lVar5 + 8 + uVar15 * 0x48) = param_2;
      }
    }
    if ((uVar7 & 1) == 0 && (uVar6 != uVar8 || uVar7 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00018012a3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 0x20))(uVar12,uVar10,uVar11);
      return;
    }
    if (uVar6 != uVar8) {
      param_2 = uVar8;
    }
    (**(code **)(lVar9 + 0x20))(uVar12,uVar10,uVar11);
    uVar33 = uVar6;
    puVar16 = puVar16 + -0x12;
  } while (param_2 < uVar6);
                    /* WARNING: Subroutine does not return */
  FUN_180201d02(param_2,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180242ee0);
}


