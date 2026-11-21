/* FUN_1800b1080 @ 1800b1080 */

void FUN_1800b1080(longlong param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001800b10c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    closesocket(*(SOCKET *)(param_1 + 0x20));
    return;
  }
  if (*(char *)(param_1 + 0x78) == '\x03') {
    FUN_1800b10f0(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  return;
}


