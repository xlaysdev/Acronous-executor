/* FUN_1801da710 @ 1801da710 */

undefined8 FUN_1801da710(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  HANDLE hObject;
  undefined8 uVar4;
  
  uVar4 = 0;
  lVar3 = WSASocketW(param_1,param_2,0,0,0,0x81);
  if (lVar3 == -1) {
    iVar1 = WSAGetLastError();
    if ((iVar1 == 0x2739) || (iVar1 == 0x2726)) {
      hObject = (HANDLE)WSASocketW(param_1 & 0xffffffff,param_2 & 0xffffffff,0,0,0,1);
      if (hObject != (HANDLE)0xffffffffffffffff) {
        BVar2 = SetHandleInformation(hObject,1,0);
        if (BVar2 == 0) {
          GetLastError();
          closesocket((SOCKET)hObject);
          return 1;
        }
        return 0;
      }
      WSAGetLastError();
    }
    uVar4 = 1;
  }
  return uVar4;
}


