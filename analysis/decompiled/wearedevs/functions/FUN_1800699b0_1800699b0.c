/* FUN_1800699b0 @ 1800699b0 */

/* WARNING: Removing unreachable block (ram,0x00018006a0d8) */

undefined8 FUN_1800699b0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong **pplVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 auStack_490 [2];
  undefined8 uStack_488;
  longlong local_480;
  undefined8 *local_478;
  ulonglong local_470;
  ulonglong local_468;
  undefined8 local_460;
  longlong *local_458 [131];
  
  if ((*(char *)(param_1 + 0xb0) == '\x01') && (*(longlong *)(param_1 + 0x98) != 0)) {
    return 0;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x20);
  uVar6 = *(ulonglong *)(param_1 + 0x28);
  uVar14 = *(ulonglong *)(param_1 + 0x30);
  uVar7 = *(ulonglong *)(param_1 + 0x48);
  if (uVar7 == 0) {
    lVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar14 <= *(ulonglong *)(param_1 + 0x40)) {
      uVar3 = uVar14;
    }
    lVar1 = *(ulonglong *)(param_1 + 0x40) - uVar3;
    lVar13 = uVar7 - (uVar14 - lVar1);
    if (uVar14 - lVar1 <= uVar7 && lVar13 != 0) {
      uVar3 = uVar14;
      goto LAB_180069a38;
    }
    uVar3 = lVar1 + uVar7;
  }
  lVar13 = 0;
LAB_180069a38:
  plVar11 = *(longlong **)(param_1 + 0x38);
  local_458[0] = plVar11 + lVar1 * 10;
  local_458[1] = plVar11 + uVar3 * 10;
  local_458[3] = plVar11 + lVar13 * 10;
  local_458[2] = plVar11;
  lVar1 = FUN_1800c3760(local_458,0);
  if ((uVar5 - uVar6) + lVar1 == 0) {
    uVar5 = *(longlong *)(param_1 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
LAB_180069a93:
    uVar2 = (**(code **)(uVar5 + 0x28))(uVar4,param_2);
  }
  else {
    local_478 = (undefined8 *)(param_1 + 0x20);
    local_480 = param_1;
    if (*(char *)(param_1 + 0x58) == '\x01') {
      local_468 = param_2;
      do {
        lVar1 = local_480;
        lVar13 = 0x38;
        do {
          *(undefined4 *)((longlong)auStack_490 + lVar13) = 0;
          *(undefined8 *)((longlong)auStack_490 + lVar13 + 8) = 1;
          *(undefined4 *)((longlong)local_458 + lVar13 + -0x28) = 0;
          *(undefined8 *)((longlong)local_458 + lVar13 + -0x20) = 1;
          *(undefined4 *)((longlong)local_458 + lVar13 + -0x18) = 0;
          *(undefined8 *)((longlong)local_458 + lVar13 + -0x10) = 1;
          *(undefined4 *)((longlong)local_458 + lVar13 + -8) = 0;
          *(undefined8 *)((longlong)local_458 + lVar13) = 1;
          lVar13 = lVar13 + 0x40;
        } while (lVar13 != 0x438);
        uVar3 = uVar5 - uVar6;
        if (uVar3 == 0) {
          pplVar12 = local_458;
          local_470 = 0;
          if (uVar7 != 0) goto LAB_180069b55;
LAB_180069bc5:
          lVar13 = 0;
          uVar14 = 0;
LAB_180069bca:
          lVar8 = 0;
        }
        else {
          if (uVar5 < uVar6) goto LAB_18006a11c;
          if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                          ,0x30,&DAT_18020b5b8);
          }
          local_458[1] = (longlong *)(uVar6 + *(longlong *)(local_480 + 0x18));
          local_458[0] = (longlong *)CONCAT44(local_458[0]._4_4_,(int)uVar3);
          local_470 = 1;
          pplVar12 = local_458 + 2;
          if (uVar7 == 0) goto LAB_180069bc5;
LAB_180069b55:
          uVar5 = 0;
          if (uVar14 <= *(ulonglong *)(local_480 + 0x40)) {
            uVar5 = uVar14;
          }
          lVar13 = *(ulonglong *)(local_480 + 0x40) - uVar5;
          lVar8 = uVar7 - (uVar14 - lVar13);
          if (uVar7 < uVar14 - lVar13 || lVar8 == 0) {
            uVar14 = uVar7 + lVar13;
            goto LAB_180069bca;
          }
        }
        if (plVar11 + lVar13 * 10 != plVar11 + uVar14 * 10) {
          plVar11 = plVar11 + lVar13 * 10;
LAB_180069c45:
                    /* WARNING: Could not recover jumptable at 0x000180069c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)(&DAT_18020c6fc + *(int *)(&DAT_18020c6fc + *plVar11 * 4)))
                            (plVar11 + 1,pplVar12,0x40 - local_470);
          return uVar4;
        }
        if (lVar8 * -0x50 != 0) goto LAB_180069c45;
        if (0x40 < local_470) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,local_470,0x40,&PTR_s_C__Users_burne__cargo_registry_s_18020b638);
        }
        uVar4 = *(undefined8 *)(local_480 + 0x78);
        lVar13 = *(longlong *)(local_480 + 0x80);
        uVar3 = local_468;
        uVar5 = (**(code **)(lVar13 + 0x40))(uVar4,local_468,local_458,local_470);
        if (uVar5 == 2) {
          return 1;
        }
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        uVar5 = *(ulonglong *)(lVar1 + 0x20);
        uVar6 = uVar5 - *(longlong *)(lVar1 + 0x28);
        local_470 = lVar13;
        local_460 = uVar4;
        if (uVar3 < uVar6 == uVar6 < uVar3) {
          *local_478 = 0;
          local_478[1] = 0;
LAB_180069f40:
          uVar6 = 0;
          uVar5 = 0;
          uVar10 = *(ulonglong *)(lVar1 + 0x30);
          uVar7 = *(ulonglong *)(lVar1 + 0x48);
          if (uVar7 == 0) goto LAB_180069d7d;
LAB_180069f56:
          uVar14 = 0;
          if (uVar10 <= *(ulonglong *)(lVar1 + 0x40)) {
            uVar14 = uVar10;
          }
          lVar13 = *(ulonglong *)(lVar1 + 0x40) - uVar14;
          lVar8 = uVar7 - (uVar10 - lVar13);
          uVar14 = uVar10;
          if (uVar7 < uVar10 - lVar13 || lVar8 == 0) {
            uVar9 = lVar13 + uVar7;
            goto LAB_180069f84;
          }
        }
        else {
          if ((char)((uVar3 < uVar6) - (uVar6 < uVar3)) != '\x01') {
            *local_478 = 0;
            local_478[1] = 0;
            if (uVar3 - uVar6 != 0) {
              uVar5 = *(ulonglong *)(lVar1 + 0x30);
              if (*(longlong *)(lVar1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_180201b60("Out of bounds access",0x14,&DAT_18020c5d0);
              }
              if (*(ulonglong *)(lVar1 + 0x40) < uVar5) {
                uVar5 = 0;
              }
              lVar13 = (*(ulonglong *)(lVar1 + 0x40) - uVar5) * 0x50;
                    /* WARNING: Could not recover jumptable at 0x000180069e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (*(code *)(&DAT_18020c710 +
                                *(int *)(&DAT_18020c710 +
                                        *(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar13) * 4)))
                                (*(longlong *)(lVar1 + 0x38) + lVar13,uVar3 - uVar6);
              return uVar4;
            }
            goto LAB_180069f40;
          }
          uVar6 = *(longlong *)(lVar1 + 0x28) + uVar3;
          *(ulonglong *)(lVar1 + 0x28) = uVar6;
          uVar10 = *(ulonglong *)(lVar1 + 0x30);
          uVar7 = *(ulonglong *)(lVar1 + 0x48);
          if (uVar7 != 0) goto LAB_180069f56;
LAB_180069d7d:
          lVar13 = 0;
          uVar9 = 0;
          uVar14 = uVar10;
LAB_180069f84:
          lVar8 = 0;
          uVar10 = uVar9;
        }
        plVar11 = *(longlong **)(lVar1 + 0x38);
        local_458[0] = plVar11 + lVar13 * 10;
        local_458[1] = plVar11 + uVar10 * 10;
        local_458[3] = plVar11 + lVar8 * 10;
        local_458[2] = plVar11;
        lVar1 = FUN_1800c3760(local_458,0);
        if (lVar1 + (uVar5 - uVar6) == 0) {
          uVar5 = local_470;
          uVar4 = local_460;
          param_2 = local_468;
          goto LAB_180069a93;
        }
      } while (uVar3 != 0);
LAB_18006a078:
      uVar2 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      lVar13 = *(longlong *)(param_1 + 0x80);
      uVar2 = 0;
      do {
        if (uVar5 < uVar6) {
LAB_18006a11c:
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar6,uVar5,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_18020c5e8);
        }
        uVar14 = param_2;
        uVar7 = (**(code **)(lVar13 + 0x20))(uVar4,param_2,lVar1 + uVar6,uVar5 - uVar6);
        if (uVar7 == 2) {
          return 1;
        }
        if ((uVar7 & 1) != 0) goto LAB_18006a078;
        uVar6 = uVar6 + uVar14;
        *(ulonglong *)(local_480 + 0x28) = uVar6;
        if (uVar5 == uVar6) {
          *local_478 = 0;
          local_478[1] = 0;
          uVar2 = (**(code **)(lVar13 + 0x28))(uVar4,param_2);
          break;
        }
      } while (uVar14 != 0);
    }
  }
  return uVar2;
}


