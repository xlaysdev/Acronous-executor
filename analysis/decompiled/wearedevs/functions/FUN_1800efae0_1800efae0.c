/* FUN_1800efae0 @ 1800efae0 */

void FUN_1800efae0(longlong param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001800efb23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    closesocket(*(SOCKET *)(param_1 + 0x20));
    return;
  }
  if (*(char *)(param_1 + 0x78) == '\x03') {
    FUN_1800efc50(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  return;
}


