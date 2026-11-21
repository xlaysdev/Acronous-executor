/* FUN_180186810 @ 180186810 */

ulonglong FUN_180186810(SOCKET *param_1,sockaddr *param_2)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1._0_2_ = param_2[8].sa_family;
  iVar1._2_1_ = param_2[8].sa_data[0];
  iVar1._3_1_ = param_2[8].sa_data[1];
  iVar1 = bind(*param_1,param_2,iVar1);
  if (iVar1 == 0) {
    return 0;
  }
  DVar2 = GetLastError();
  return (ulonglong)DVar2 << 0x20 | 2;
}


