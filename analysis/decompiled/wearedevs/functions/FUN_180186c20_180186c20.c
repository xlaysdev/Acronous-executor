/* FUN_180186c20 @ 180186c20 */

void FUN_180186c20(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  SOCKET s;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180265198);
  }
  s = 0xf;
  uVar4 = FUN_180186890("127.0.0.1:34254");
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000180186c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    closesocket(s);
    return;
  }
  if (((uint)s & 3) != 1) {
    return;
  }
  uVar2 = *(undefined8 *)(s - 1);
  puVar3 = *(undefined8 **)(s + 7);
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
  }
  thunk_FUN_1801d3330(s - 1,0x18,8);
  return;
}


