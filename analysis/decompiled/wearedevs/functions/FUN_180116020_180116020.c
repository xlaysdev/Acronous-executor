/* FUN_180116020 @ 180116020 */

void FUN_180116020(undefined1 param_1)

{
  undefined8 *puVar1;
  
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x11) = param_1;
  return;
}


