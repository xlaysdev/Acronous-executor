/* FUN_180115640 @ 180115640 */

void FUN_180115640(void)

{
  undefined8 *puVar1;
  
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 4;
  return;
}


