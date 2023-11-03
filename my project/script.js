//const girls = ['apple','ball','cat','dog','elephant','fish','girls','hello','ink','jock','kight','link','mango','nik','orange','photo','quean','rest','sapna bhamdare','tulsi bhamdare','usa','van','watch','xray','yak','zero','Apragati','Brinkal','Cute','Dolly'];
const girls = [" Radha Chaudhari",
"Jyoti Manikrao Kalaskar",
"Janhvi Suresh Shende",
"Divya Bhagawan Kusumbe",
"Vanashri Shuddhodhan Tembhurne",
"Punam Omkarlal Chaudhari",
"Kiran Ashok Chaware",
"Kajal Vilas Dhomane",
"Krutika Jitendra Tatte",
"Ku.Neha Prakash Shelke.",
"Akanksha Pramod Nagdeve",
"Lalita Madan Lanje",
"Lina Raju Barve",
"Nikita Tulshidas Dagwar",
"Madhuri Santosh Gore",
"Kiran Vijay bramhane",
"Pratiksha Arvind Khakse",
"Laxmi Bhaskar shende",
"Manasi Gajanan Panchabuddhe",
"Amisha Santosh Sarkate",
"Neha Nitin Saraf",
"Manasvi Rajabhau Yekhande",
"Seema Shankhlal Bhilawekar",
"Sarika Rajendra Shende",
"Pooja Gajanan Sawant",
"Purvaja vijay pedhekar",
"Shraddha sudhir Pendse",
"Leena Krushna Bhandarkar",
"Puja Anuraj Ubarhande",
"sapna dipak bhmadare",
"roshani prakash nayde"];


const rooms = 10;
const girlsPerRoom = 3;

function shuffleArray(array) {
  for (let i = array.length - 1; i > 0; i--) {
    const j = Math.floor(Math.random() * (i + 1));
    [array[i], array[j]] = [array[j], array[i]];
  }
}

function assignRooms() {
  const shuffledGirls = [...girls];
  shuffleArray(shuffledGirls);
  
  const tableBody = document.querySelector('tbody');
  tableBody.innerHTML = '';

  for (let i = 0; i < rooms; i++) {
    const roomGirls = shuffledGirls.splice(0, girlsPerRoom);
    const newRow = document.createElement('tr');
    newRow.innerHTML = `
      <td>Room ${i + 1}</td>
      <td>${roomGirls.join(', ')}</td>
    `;
    tableBody.appendChild(newRow);
  }
}

const shuffleButton = document.getElementById('shuffleButton');
shuffleButton.addEventListener('click', assignRooms);

// Initial assignment on page load
assignRooms();
