import "./App.css";
import io from "socket.io-client";
import React,{useState,useEffect} from "react";
import Chat from "./Chat";
const socket=io.connect("http://localhost:5000");

function App() {
  const [name,setName]=useState("");
  const [room,setRoom]=useState("");
  const [showChat, setShowChat] = useState(false);

  const joinRoom=()=>{
    if(name!=="" && room!=="")
    {
      socket.emit("join_room",room);
      setShowChat(true);
    }

  };
  return (
    <div className="App">
      {!showChat ? (<div className="joinChatContainer">

      Real-Time Chat Application
      <h2>Start Chatting</h2>
      <input type="text" placeholder="Enter your name..."
      onChange={(event)=>{
        setName(event.target.value);
      }}
      ></input>
      <input type="text" placeholder="Enter the  room id..."
       onChange={(event)=>{
        setRoom(event.target.value);
      }}
      ></input>
      <button onClick={joinRoom}>Join</button>
      </div>
      ) : (
      <Chat socket={socket} name={name} room={room} />
      )}
    </div>
  );
}

export default App;
