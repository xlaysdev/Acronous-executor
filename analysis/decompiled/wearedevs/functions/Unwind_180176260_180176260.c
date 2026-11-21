/* Unwind@180176260 @ 180176260 */

void Unwind_180176260(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  
  puVar2 = *(ulonglong **)(param_2 + 0xc0);
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = *puVar2 - 0x40;
  UNLOCK();
  if (uVar1 < 0x40) {
    *(undefined1 *)(param_2 + 0xdc) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263618);
  }
  if ((uVar1 & 0xffffffffffffffc0) == 0x40) {
    pcVar3 = *(code **)(puVar2[2] + 0x10);
    *(undefined1 *)(param_2 + 0xdc) = 0;
    (*pcVar3)();
  }
  *(undefined1 *)(param_2 + 0xdc) = 0;
  return;
}


