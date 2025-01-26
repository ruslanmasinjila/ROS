
"use strict";

let GripperState = require('./GripperState.js')
let ConfigToolModbus = require('./ConfigToolModbus.js')
let GetDigitalIO = require('./GetDigitalIO.js')
let SetAxis = require('./SetAxis.js')
let GetErr = require('./GetErr.js')
let SetMultipleInts = require('./SetMultipleInts.js')
let Move = require('./Move.js')
let SetLoad = require('./SetLoad.js')
let SetModbusTimeout = require('./SetModbusTimeout.js')
let GetSetModbusData = require('./GetSetModbusData.js')
let ClearErr = require('./ClearErr.js')
let Call = require('./Call.js')
let SetInt16 = require('./SetInt16.js')
let TCPOffset = require('./TCPOffset.js')
let SetString = require('./SetString.js')
let GetFloat32List = require('./GetFloat32List.js')
let MoveAxisAngle = require('./MoveAxisAngle.js')
let GetControllerDigitalIO = require('./GetControllerDigitalIO.js')
let GripperMove = require('./GripperMove.js')
let SetControllerAnalogIO = require('./SetControllerAnalogIO.js')
let SetFloat32 = require('./SetFloat32.js')
let MoveVelo = require('./MoveVelo.js')
let SetToolModbus = require('./SetToolModbus.js')
let GripperConfig = require('./GripperConfig.js')
let PlayTraj = require('./PlayTraj.js')
let FtIdenLoad = require('./FtIdenLoad.js')
let GetInt32 = require('./GetInt32.js')
let SetDigitalIO = require('./SetDigitalIO.js')
let MoveVelocity = require('./MoveVelocity.js')
let FtCaliLoad = require('./FtCaliLoad.js')
let GetAnalogIO = require('./GetAnalogIO.js')

module.exports = {
  GripperState: GripperState,
  ConfigToolModbus: ConfigToolModbus,
  GetDigitalIO: GetDigitalIO,
  SetAxis: SetAxis,
  GetErr: GetErr,
  SetMultipleInts: SetMultipleInts,
  Move: Move,
  SetLoad: SetLoad,
  SetModbusTimeout: SetModbusTimeout,
  GetSetModbusData: GetSetModbusData,
  ClearErr: ClearErr,
  Call: Call,
  SetInt16: SetInt16,
  TCPOffset: TCPOffset,
  SetString: SetString,
  GetFloat32List: GetFloat32List,
  MoveAxisAngle: MoveAxisAngle,
  GetControllerDigitalIO: GetControllerDigitalIO,
  GripperMove: GripperMove,
  SetControllerAnalogIO: SetControllerAnalogIO,
  SetFloat32: SetFloat32,
  MoveVelo: MoveVelo,
  SetToolModbus: SetToolModbus,
  GripperConfig: GripperConfig,
  PlayTraj: PlayTraj,
  FtIdenLoad: FtIdenLoad,
  GetInt32: GetInt32,
  SetDigitalIO: SetDigitalIO,
  MoveVelocity: MoveVelocity,
  FtCaliLoad: FtCaliLoad,
  GetAnalogIO: GetAnalogIO,
};
