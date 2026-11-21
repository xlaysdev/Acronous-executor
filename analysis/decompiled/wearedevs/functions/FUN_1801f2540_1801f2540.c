/* FUN_1801f2540 @ 1801f2540 */

undefined8 *
FUN_1801f2540(undefined8 *param_1,undefined8 param_2,undefined8 param_3,void *param_4,
             ulonglong param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_5 == 0) {
    param_1[9] = param_2;
    param_1[10] = param_3;
    param_1[0xb] = param_4;
    param_1[0xc] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_3;
    *(undefined2 *)(param_1 + 3) = 0x101;
    *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
    return param_1;
  }
  if (param_5 == 1) {
    uVar10 = 1;
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 1;
  }
  else {
    uVar7 = 1;
    uVar11 = 0;
    uVar10 = 1;
    uVar6 = 0;
    uVar3 = 1;
    do {
      while( true ) {
        uVar4 = uVar6 + uVar11;
        if (param_5 <= uVar4) goto LAB_1801f2a7e;
        if (*(byte *)((longlong)param_4 + uVar4) <= *(byte *)((longlong)param_4 + uVar3)) break;
        uVar7 = uVar7 + uVar11 + 1;
        uVar10 = uVar7 - uVar6;
LAB_1801f264c:
        uVar11 = 0;
        uVar3 = uVar7;
        if (param_5 <= uVar7) goto LAB_1801f26ae;
      }
      if (*(byte *)((longlong)param_4 + uVar3) != *(byte *)((longlong)param_4 + uVar4)) {
        uVar10 = 1;
        uVar6 = uVar7;
        uVar7 = uVar7 + 1;
        goto LAB_1801f264c;
      }
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar10) {
        uVar3 = uVar11;
        uVar11 = 0;
      }
      else {
        uVar3 = 0;
      }
      uVar7 = uVar7 + uVar3;
      uVar3 = uVar7 + uVar11;
    } while (uVar7 + uVar11 < param_5);
LAB_1801f26ae:
    uVar2 = 1;
    uVar11 = 0;
    uVar5 = 1;
    uVar7 = 0;
    uVar3 = 1;
LAB_1801f26ec:
    do {
      uVar4 = uVar7 + uVar11;
      if (param_5 <= uVar4) {
LAB_1801f2a7e:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,param_5,&PTR_s_library_core_src_str_pattern_rs_180293960);
      }
      if (*(byte *)((longlong)param_4 + uVar4) < *(byte *)((longlong)param_4 + uVar3)) {
        uVar11 = uVar2 + uVar11 + 1;
        uVar5 = uVar11 - uVar7;
      }
      else {
        if (*(byte *)((longlong)param_4 + uVar3) == *(byte *)((longlong)param_4 + uVar4)) {
          uVar11 = uVar11 + 1;
          if (uVar11 == uVar5) {
            uVar3 = uVar11;
            uVar11 = 0;
          }
          else {
            uVar3 = 0;
          }
          uVar2 = uVar2 + uVar3;
          uVar3 = uVar2 + uVar11;
          if (param_5 <= uVar2 + uVar11) break;
          goto LAB_1801f26ec;
        }
        uVar5 = 1;
        uVar11 = uVar2 + 1;
        uVar7 = uVar2;
      }
      uVar2 = uVar11;
      uVar11 = 0;
      uVar3 = uVar2;
    } while (uVar2 < param_5);
  }
  if (uVar7 < uVar6) {
    uVar5 = uVar10;
    uVar7 = uVar6;
  }
  if (param_5 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar7,param_5,&PTR_s_library_core_src_str_pattern_rs_1802939c0);
  }
  if ((CARRY8(uVar5,uVar7)) || (param_5 < uVar5 + uVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar5,uVar5 + uVar7,param_5,&PTR_s_library_core_src_str_pattern_rs_1802939a8);
  }
  iVar1 = memcmp(param_4,(void *)((longlong)param_4 + uVar5),uVar7);
  if (iVar1 == 0) {
    uVar10 = 1;
    uVar11 = 0;
    uVar6 = 0;
    uVar3 = 1;
    do {
      while( true ) {
        if (param_5 <= uVar3 + uVar11) goto LAB_1801f27fe;
        uVar4 = (param_5 - uVar11) + ~uVar3;
        if (param_5 <= uVar4) goto LAB_1801f2a8d;
        uVar2 = ((param_5 - 1) - uVar11) - uVar6;
        if (param_5 <= uVar2) goto LAB_1801f2a9c;
        if (*(byte *)((longlong)param_4 + uVar2) <= *(byte *)((longlong)param_4 + uVar4)) break;
        uVar3 = uVar11 + uVar3 + 1;
        uVar10 = uVar3 - uVar6;
        uVar11 = 0;
LAB_1801f27ec:
        if (uVar10 == uVar5) goto LAB_1801f27fe;
      }
      if (*(byte *)((longlong)param_4 + uVar4) == *(byte *)((longlong)param_4 + uVar2)) {
        uVar11 = uVar11 + 1;
        if (uVar11 == uVar10) {
          uVar4 = uVar11;
          uVar11 = 0;
        }
        else {
          uVar4 = 0;
        }
        uVar3 = uVar4 + uVar3;
        goto LAB_1801f27ec;
      }
      uVar10 = 1;
      uVar11 = 0;
      uVar6 = uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar5 != 1);
LAB_1801f27fe:
    uVar8 = 1;
    uVar11 = 0;
    uVar3 = 0;
    uVar10 = 1;
LAB_1801f2838:
    do {
      if (param_5 <= uVar10 + uVar11) break;
      uVar4 = (param_5 - uVar11) + ~uVar10;
      if (param_5 <= uVar4) {
LAB_1801f2a8d:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,param_5,&PTR_s_library_core_src_str_pattern_rs_180293978);
      }
      uVar2 = ((param_5 - 1) - uVar11) - uVar3;
      if (param_5 <= uVar2) {
LAB_1801f2a9c:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar2,param_5,&PTR_s_library_core_src_str_pattern_rs_180293990);
      }
      if (*(byte *)((longlong)param_4 + uVar2) < *(byte *)((longlong)param_4 + uVar4)) {
        uVar10 = uVar11 + uVar10 + 1;
        uVar8 = uVar10 - uVar3;
        uVar11 = 0;
LAB_1801f28b1:
        if (uVar8 == uVar5) break;
        goto LAB_1801f2838;
      }
      if (*(byte *)((longlong)param_4 + uVar4) == *(byte *)((longlong)param_4 + uVar2)) {
        uVar11 = uVar11 + 1;
        if (uVar11 == uVar8) {
          uVar4 = uVar11;
          uVar11 = 0;
        }
        else {
          uVar4 = 0;
        }
        uVar10 = uVar4 + uVar10;
        goto LAB_1801f28b1;
      }
      uVar8 = 1;
      uVar11 = 0;
      uVar3 = uVar10;
      uVar10 = uVar10 + 1;
    } while (uVar5 != 1);
    if (uVar6 < uVar3) {
      uVar6 = uVar3;
    }
    uVar6 = param_5 - uVar6;
    uVar11 = param_5;
    if (uVar5 != 0) {
      uVar10 = (ulonglong)((uint)uVar5 & 3);
      if (uVar5 < 4) {
        uVar4 = 0;
        uVar3 = 0;
      }
      else {
        uVar4 = 0;
        uVar3 = 0;
        do {
          uVar3 = uVar3 | 1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar4) & 0x3f) |
                  1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar4 + 1) & 0x3f) |
                  1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar4 + 2) & 0x3f) |
                  1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar4 + 3) & 0x3f);
          uVar4 = uVar4 + 4;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar10 != 0) {
        uVar2 = 0;
        do {
          uVar3 = uVar3 | 1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar2 + uVar4) & 0x3f);
          uVar2 = uVar2 + 1;
        } while (uVar10 != uVar2);
      }
      uVar9 = 0;
      goto LAB_1801f2a09;
    }
    uVar9 = 0;
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar11 = (ulonglong)((uint)param_5 & 3);
    if (param_5 - 1 < 3) {
      uVar6 = 0;
      uVar3 = 0;
    }
    else {
      uVar6 = 0;
      uVar3 = 0;
      do {
        uVar3 = uVar3 | 1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar6) & 0x3f) |
                1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar6 + 1) & 0x3f) |
                1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar6 + 2) & 0x3f) |
                1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar6 + 3) & 0x3f);
        uVar6 = uVar6 + 4;
      } while ((param_5 & 0xfffffffffffffffc) != uVar6);
    }
    if (uVar11 != 0) {
      uVar10 = 0;
      do {
        uVar3 = uVar3 | 1L << ((ulonglong)*(byte *)((longlong)param_4 + uVar10 + uVar6) & 0x3f);
        uVar10 = uVar10 + 1;
      } while (uVar11 != uVar10);
    }
    uVar5 = param_5 - uVar7;
    if (param_5 - uVar7 <= uVar7) {
      uVar5 = uVar7;
    }
    uVar5 = uVar5 + 1;
    uVar9 = 0xffffffffffffffff;
    uVar6 = uVar7;
    uVar11 = 0xffffffffffffffff;
  }
LAB_1801f2a09:
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  *param_1 = 1;
  param_1[1] = uVar7;
  param_1[2] = uVar6;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = 0;
  param_1[6] = param_3;
  param_1[7] = uVar9;
  param_1[8] = uVar11;
  return param_1;
}


