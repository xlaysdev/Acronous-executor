/* FUN_180123780 @ 180123780 */

void FUN_180123780(undefined8 *param_1,longlong *param_2,char param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  char local_58 [40];
  
  uVar1 = *(uint *)(param_1 + 5);
  if (uVar1 < 1000000000) {
    uVar2 = param_1[4];
    cVar3 = (**(code **)(param_1[7] + 0x18))(param_1[6]);
    if (cVar3 == '\0') {
      uVar6 = *(uint *)(param_4 + 0x38);
      if (uVar6 == 1000000000) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("keep_alive expects last_read_at",0x1f,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802421f8);
      }
      uVar4 = FUN_1801e5a10(*(undefined8 *)(param_4 + 0x30),uVar6,*param_1,
                            *(undefined4 *)(param_1 + 1));
      bVar9 = uVar4 < uVar2;
      if (uVar4 == uVar2) {
        bVar9 = uVar6 < uVar1;
      }
      if (!bVar9 && (uVar4 != uVar2 || uVar6 != uVar1)) {
        *(undefined4 *)(param_1 + 5) = 1000000000;
                    /* WARNING: Could not recover jumptable at 0x00018012380b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)*param_2 + 0x10))(((longlong *)*param_2)[1]);
        return;
      }
      if ((param_3 == '\0') || (*(char *)(param_1 + 10) != '\0')) {
        iVar7 = (int)param_4 + 0x40;
        FUN_18013acc0(local_58);
        if (local_58[0] == '\x05') {
          if (*(longlong *)(param_4 + 0x48) == 0) {
            uVar5 = FUN_1801df8c0();
          }
          else {
            lVar8 = *(longlong *)(param_4 + 0x50);
            uVar5 = (**(code **)(lVar8 + 0x28))
                              ((*(longlong *)(lVar8 + 0x10) - 1U & 0xfffffffffffffff0) +
                               *(longlong *)(param_4 + 0x48) + 0x10);
            iVar7 = (int)lVar8;
          }
          *(undefined8 *)(param_4 + 0x10) = uVar5;
          *(int *)(param_4 + 0x18) = iVar7;
        }
        else {
          FUN_180116070(local_58);
        }
        *(undefined4 *)(param_1 + 5) = 0x3b9aca02;
        lVar8 = param_1[8];
        if (lVar8 == 0) {
          uVar5 = FUN_1801df8c0();
          FUN_1801e5a10(uVar5);
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0("You must supply a timer.C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\common\\time.rs"
                        ,0x31,&DAT_180242aa0);
        }
        uVar5 = (**(code **)(param_1[9] + 0x28))
                          ((*(longlong *)(param_1[9] + 0x10) - 1U & 0xfffffffffffffff0) + lVar8 +
                           0x10);
        uVar5 = FUN_1801e5a10(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001801238d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1[9] + 0x30))
                  (lVar8 + (*(longlong *)(param_1[9] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                   param_1 + 6,uVar5,iVar7);
        return;
      }
    }
  }
  return;
}


