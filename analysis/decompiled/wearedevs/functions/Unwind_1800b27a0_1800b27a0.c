/* Unwind@1800b27a0 @ 1800b27a0 */

void Unwind_1800b27a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x450) + 0x319) == '\0') {
    return;
  }
  closesocket(*(SOCKET *)(*(longlong *)(param_2 + 0x450) + 0x2c8));
  return;
}


