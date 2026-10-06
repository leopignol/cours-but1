// const fs = require('node:fs');

const urlSelector = /https?:\/\/(?:www\.)?[-a-z0-9@:%._\+~#=]{1,256}\.[a-z0-9()]{2,6}\b(?:[-a-z0-9\u00C0-\u024F\u1E00-\u1EFF()@:%_\+.~#?&\/=]*)/gmi;

/**
 * 
 * @param {String} url 
 * @returns Promise<Array[String]>
 */
function urls(url){
  return fetch(url)
    .then(res => res.text())
    .then(content => [
    ...new Set(
      Array.from(
        content.matchAll(urlSelector)
      ).map(el => el[0])
    )
  ]);
}

urls('https://fr.wikipedia.org/wiki/Arabo-boulonnais')
  .then(console.dir);
