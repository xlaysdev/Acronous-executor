/* FUN_1801d5d00 @ 1801d5d00 */

undefined ** FUN_1801d5d00(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  uint *puVar7;
  longlong lVar8;
  undefined **ppuVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar8 = 0;
    uVar5 = 0;
    do {
      if (*(int *)(param_2 + lVar8) != 0) goto LAB_1801d5d56;
      uVar5 = uVar5 + 1;
      lVar8 = lVar8 + 0x10;
    } while (param_3 * 0x10 != lVar8);
    uVar5 = (param_3 * 0x10 - 0x10 >> 4) + 1;
LAB_1801d5d56:
    if (param_3 < uVar5) {
LAB_1801d5f16:
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar5,param_3,param_3,&PTR_s_library_std_src_io_mod_rs_18028f450);
    }
    param_3 = param_3 - uVar5;
    if (param_3 != 0) {
      puVar7 = (uint *)(param_2 + uVar5 * 0x10);
      do {
        lVar10 = param_3 * 0x10;
        lVar8 = 0;
        do {
          lVar4 = lVar8;
          if (lVar10 == lVar4) {
            ppuVar6 = (undefined **)0x1;
            goto LAB_1801d5dd8;
          }
          lVar8 = lVar4 + 0x10;
        } while (*(int *)((longlong)puVar7 + lVar4) == 0);
        ppuVar6 = *(undefined ***)((longlong)puVar7 + lVar4 + 8);
LAB_1801d5dd8:
        uVar5 = FUN_1801dc790();
        if ((uVar5 & 1) == 0) {
          if (ppuVar6 == (undefined **)0x0) {
            return &PTR_s_failed_to_write_whole_buffer_18028ef30;
          }
          lVar8 = 0;
          uVar5 = 0;
          do {
            ppuVar9 = (undefined **)
                      ((longlong)ppuVar6 - (longlong)(ulonglong)*(uint *)((longlong)puVar7 + lVar8))
            ;
            if (ppuVar6 < (undefined **)(ulonglong)*(uint *)((longlong)puVar7 + lVar8))
            goto LAB_1801d5e4e;
            uVar5 = uVar5 + 1;
            lVar8 = lVar8 + 0x10;
            ppuVar6 = ppuVar9;
          } while (lVar10 != lVar8);
          uVar5 = (lVar10 - 0x10U >> 4) + 1;
LAB_1801d5e4e:
          if (param_3 < uVar5) goto LAB_1801d5f16;
          param_3 = param_3 - uVar5;
          if (param_3 == 0) {
            if (ppuVar6 != (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_180201ee0("advancing io slices beyond their length",0x4f,
                            &PTR_s_library_std_src_io_mod_rs_18028f438);
            }
            break;
          }
          puVar7 = puVar7 + uVar5 * 4;
          if ((undefined **)(ulonglong)*puVar7 < ppuVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0("advancing IoSlice beyond its length",0x47,
                          &PTR_s_library_std_src_sys_io_io_slice__18028f3f8);
          }
          *puVar7 = *puVar7 - (int)ppuVar6;
          *(longlong *)(puVar7 + 2) = *(longlong *)(puVar7 + 2) + (longlong)ppuVar6;
        }
        else {
          uVar3 = (uint)ppuVar6 & 3;
          switch(uVar3) {
          case 0:
            if (*(char *)(ppuVar6 + 2) != '#') {
              return ppuVar6;
            }
            break;
          case 1:
            if (*(char *)((longlong)ppuVar6 + 0xf) != '#') {
              return ppuVar6;
            }
            if (uVar3 == 1) {
              uVar1 = *(undefined8 *)((longlong)ppuVar6 - 1);
              puVar2 = *(undefined8 **)((longlong)ppuVar6 + 7);
              if ((code *)*puVar2 != (code *)0x0) {
                (*(code *)*puVar2)(uVar1);
              }
              if (puVar2[1] != 0) {
                thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
              }
              thunk_FUN_1801d3330((longlong)ppuVar6 - 1,0x18);
            }
            break;
          case 2:
            goto switchD_1801d5df5_caseD_2;
          case 3:
            if ((int)((ulonglong)ppuVar6 >> 0x20) != 0x23) {
              return ppuVar6;
            }
          }
        }
      } while (param_3 != 0);
    }
  }
  ppuVar6 = (undefined **)0x0;
switchD_1801d5df5_caseD_2:
  return ppuVar6;
}


