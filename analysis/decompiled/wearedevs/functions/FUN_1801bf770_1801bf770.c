/* FUN_1801bf770 @ 1801bf770 */

void FUN_1801bf770(undefined8 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_124;
  uint local_120;
  uint local_11c;
  
  puVar1 = *(undefined1 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180286e50);
  }
  memset(&local_120,0,0x118);
  local_124 = 0x11c;
  iVar2 = RtlGetVersion(&local_124);
  bVar3 = true;
  if ((-1 < iVar2) && (local_120 < 7)) {
    if (local_120 != 6) {
      *puVar1 = 0;
      return;
    }
    bVar3 = 2 < local_11c;
  }
  *puVar1 = bVar3;
  return;
}


