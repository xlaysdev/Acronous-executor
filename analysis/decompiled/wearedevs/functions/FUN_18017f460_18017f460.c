/* FUN_18017f460 @ 18017f460 */

ulonglong FUN_18017f460(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar4 = *param_1;
  uVar6 = CONCAT71((int7)(param_2 >> 8),1);
  if ((uVar4 & 2) == 0) {
    if ((uVar4 & 0x10) == 0) {
      uVar3 = (**(code **)*param_3)(param_3[1]);
      if ((uVar4 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: snapshot.is_join_interested()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\task\\harness.rs"
                      ,0x2f,&DAT_180264d40);
      }
      if (*(longlong *)(param_2 + 0x10) != 0) {
        (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
      }
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      *(ulonglong *)(param_2 + 0x18) = uVar6;
      uVar4 = *param_1;
      do {
        if ((uVar4 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: curr.is_join_interested()",0x2b,
                        &PTR_s_C__Users_burne__cargo_registry_s_180263348);
        }
        if ((uVar4 & 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: !curr.is_join_waker_set()",0x2b,
                        &PTR_s_C__Users_burne__cargo_registry_s_180263390);
        }
        if ((uVar4 & 2) != 0) {
          uVar6 = param_2;
          if (*(longlong *)(param_2 + 0x10) != 0) {
            (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
          }
LAB_18017f5ea:
          *(undefined8 *)(param_2 + 0x10) = 0;
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
          goto LAB_18017f5f8;
        }
        LOCK();
        uVar6 = *param_1;
        bVar7 = uVar4 == uVar6;
        if (bVar7) {
          *param_1 = uVar4 | 0x10;
        }
        else {
          uVar4 = uVar6;
        }
        UNLOCK();
      } while (!bVar7);
    }
    else {
      if (*(undefined8 **)(param_2 + 0x10) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&DAT_1802631f8);
      }
      puVar1 = (undefined8 *)*param_3;
      lVar2 = param_3[1];
      if (*(undefined8 **)(param_2 + 0x10) != puVar1 || *(longlong *)(param_2 + 0x18) != lVar2) {
        uVar4 = *param_1;
        do {
          if ((uVar4 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: curr.is_join_interested()",0x2b,
                          &PTR_s_C__Users_burne__cargo_registry_s_1802632a8);
          }
          if ((uVar4 & 2) != 0) goto LAB_18017f5f8;
          if ((uVar4 & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: curr.is_join_waker_set()",0x2a,
                          &PTR_s_C__Users_burne__cargo_registry_s_1802632f0);
          }
          LOCK();
          uVar5 = *param_1;
          bVar7 = uVar4 == uVar5;
          if (bVar7) {
            *param_1 = uVar4 & 0xffffffffffffffed;
          }
          else {
            uVar4 = uVar5;
          }
          UNLOCK();
        } while (!bVar7);
        uVar3 = (*(code *)*puVar1)(lVar2);
        uVar4 = uVar6;
        if (*(longlong *)(param_2 + 0x10) != 0) {
          (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
        }
        *(undefined8 *)(param_2 + 0x10) = uVar3;
        *(ulonglong *)(param_2 + 0x18) = uVar6;
        uVar5 = *param_1;
        uVar6 = uVar4;
        do {
          if ((uVar5 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: curr.is_join_interested()",0x2b,
                          &PTR_s_C__Users_burne__cargo_registry_s_180263348);
          }
          if ((uVar5 & 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: !curr.is_join_waker_set()",0x2b,
                          &PTR_s_C__Users_burne__cargo_registry_s_180263390);
          }
          if ((uVar5 & 2) != 0) {
            if (*(longlong *)(param_2 + 0x10) != 0) {
              (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
            }
            goto LAB_18017f5ea;
          }
          uVar6 = 0;
          LOCK();
          uVar4 = *param_1;
          bVar7 = uVar5 == uVar4;
          if (bVar7) {
            *param_1 = uVar5 | 0x10;
          }
          else {
            uVar5 = uVar4;
          }
          UNLOCK();
        } while (!bVar7);
        goto LAB_18017f5f8;
      }
    }
    uVar6 = 0;
  }
LAB_18017f5f8:
  return uVar6 & 0xffffffff;
}


