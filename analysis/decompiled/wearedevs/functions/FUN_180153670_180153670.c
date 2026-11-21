/* FUN_180153670 @ 180153670 */

void FUN_180153670(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int local_14;
  int *local_10;
  code *local_8;
  
  uVar1 = *(uint *)(param_2 + 1);
  local_14 = *(int *)((longlong)param_2 + 0xc);
  if ((ulonglong)uVar1 < *(ulonglong *)(*param_2 + 0x10)) {
    lVar2 = *(longlong *)(*param_2 + 8);
    lVar3 = (ulonglong)uVar1 * 0x148;
    if ((*(int *)(lVar2 + lVar3) != 2) && (lVar2 = lVar2 + lVar3, *(int *)(lVar2 + 300) == local_14)
       ) {
      if (*(char *)(lVar2 + 0x138) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: stream.is_counted",0x23,
                      &PTR_s_C__Users_burne__cargo_registry_s_180257e08);
      }
      if (local_14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: !id.is_zero()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\peer.rs"
                      ,0x1f,&DAT_180254ba0);
      }
      if ((((byte)local_14 ^ *(byte *)(param_1 + 0x68)) & 1) == 0) {
        if (*(longlong *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: self.num_recv_streams > 0",0x2b,
                        &PTR_s_C__Users_burne__cargo_registry_s_180257e50);
        }
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
        *(undefined1 *)(lVar2 + 0x138) = 0;
        return;
      }
      if (*(longlong *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.num_send_streams > 0",0x2b,
                      &PTR_s_C__Users_burne__cargo_registry_s_180257e98);
      }
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
      *(undefined1 *)(lVar2 + 0x138) = 0;
      return;
    }
  }
  local_10 = &local_14;
  local_8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_10,&PTR_s_C__Users_burne__cargo_registry_s_180257040,param_4,
                uVar1);
}


