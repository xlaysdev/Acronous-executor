/* FUN_1801da930 @ 1801da930 */

bool FUN_1801da930(char *param_1)

{
  int iVar1;
  ulonglong uVar2;
  SOCKET s;
  char *pcVar3;
  sockaddr local_34;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (*param_1 == '\x01') {
    s = 2;
    uVar2 = FUN_1801da710(0x17,2);
    if ((uVar2 & 1) != 0) {
      return true;
    }
    local_34.sa_data._0_2_ = *(ushort *)(param_1 + 0x1c) << 8 | *(ushort *)(param_1 + 0x1c) >> 8;
    pcVar3 = param_1 + 0x14;
    local_1c = *(undefined4 *)(param_1 + 0x18);
    local_34.sa_data._6_4_ = *(undefined4 *)(param_1 + 4);
    local_34.sa_data._10_4_ = *(undefined4 *)(param_1 + 8);
    uStack_24 = *(undefined4 *)(param_1 + 0xc);
    uStack_20 = *(undefined4 *)(param_1 + 0x10);
    iVar1 = 0x1c;
    local_34.sa_family = 0x17;
  }
  else {
    local_1c = 2;
    s = 2;
    uVar2 = FUN_1801da710(2,2);
    if ((uVar2 & 1) != 0) {
      return true;
    }
    pcVar3 = param_1 + 2;
    local_34.sa_data._0_2_ = *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
    local_34.sa_data[6] = '\0';
    local_34.sa_data[7] = '\0';
    local_34.sa_data[8] = '\0';
    local_34.sa_data[9] = '\0';
    local_34.sa_data[10] = '\0';
    local_34.sa_data[0xb] = '\0';
    local_34.sa_data[0xc] = '\0';
    local_34.sa_data[0xd] = '\0';
    uStack_24 = 0;
    uStack_20 = 0;
    iVar1 = 0x10;
    local_34.sa_family = 2;
  }
  local_34.sa_data._2_4_ = *(undefined4 *)pcVar3;
  iVar1 = bind(s,&local_34,iVar1);
  if (iVar1 == -1) {
    WSAGetLastError();
    closesocket(s);
  }
  return iVar1 == -1;
}


