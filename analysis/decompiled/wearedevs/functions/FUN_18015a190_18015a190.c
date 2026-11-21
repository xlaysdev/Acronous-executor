/* FUN_18015a190 @ 18015a190 */

void FUN_18015a190(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x98) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.max_stream_id >= last_processed_id",0x39,
                  &PTR_s_C__Users_burne__cargo_registry_s_18025b0d8);
  }
  *(uint *)(param_1 + 0x98) = param_2;
  return;
}


