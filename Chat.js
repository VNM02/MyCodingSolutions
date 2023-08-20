import React from 'react'
import {useState} from 'react'
import { useEffect } from 'react';


function Chat({socket,name,room}) {
const [msg,setMsg]=useState("");

const sendMsg= async ()=>{
  if(msg!=="")
  {
    const msgObj={
      room:room,
      sender:name,
      message:msg,
      time:new Date().toLocaleTimeString(),
    };
    await socket.emit("send_message",msgObj);
  }
};

useEffect(()=>{   // to receive message from server [socket] is used to avoid infinite loop   
  socket.on("receive_message",(data)=>{
    console.log(data);
  })
},[socket]);

  return (
    <div className='chat-window'>
  <div>
        <div className='chat-header'>
          <p>Chat Window</p>
        </div>
        <div className='chat-body'></div>
        <div className='chat-footer'>
          <input type='text' placeholder='Type your message here...' 
          onChange={(event)=>{
            setMsg(event.target.value);
          }}
          />
          <button onClick={sendMsg}>&#9658;</button>
        </div>
    </div>
    </div>
  )
}

export default Chat