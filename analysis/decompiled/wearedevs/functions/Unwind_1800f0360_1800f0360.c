/* Unwind@1800f0360 @ 1800f0360 */

void Unwind_1800f0360(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x158) + 0x79) == '\0') {
    return;
  }
  closesocket(*(SOCKET *)(*(longlong *)(param_2 + 0x158) + 0x28));
  return;
}


