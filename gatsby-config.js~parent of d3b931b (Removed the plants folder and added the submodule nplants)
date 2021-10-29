const path = require('path')
const pathPrefix = process.env.KB_BASE_PATH || '/'

module.exports = {
  pathPrefix,
  siteMetadata: {
    title: `Digital Garden`,
    description: `Digital Garden : The Knowledge Base.`,
    author: `Adam Al-Rahman`,
    siteUrl: `https://gatsbystarterdefaultsource.gatsbyjs.io/`,
  },
  plugins: [
    `gatsby-plugin-sharp`,
    {
      resolve: `gatsby-theme-kb`,
      options: {
        contentPath: path.resolve(__dirname, 'plants/notes/'),
        rootNote: 'Welcome',
        wikiLinkLabelTemplate: '[[{{ refWord }}]]',
        getPluginMdx(defaultPluginMdx) {
          defaultPluginMdx.options.gatsbyRemarkPlugins.push(
            {
              resolve: 'gatsby-remark-prismjs',
              resolve: 'gatsby-remark-mermaid',
              options: {
                  language: 'mermaid',
                  theme: 'dark',
                  viewport: {
                      width: 250,
                      height: 250
                  },
                  mermaidOptions: {
                      themeCSS: ".node rect { fill: #00000060, 'fontFamily': 'Menlo', 'fontSize': 18, 'fontWeight': 400}}"
                  }
              }
             },
            {
              resolve: 'gatsby-remark-obsidian',
              options: {
                  titleToURL: (title) => `/${title}`, // optional
                  markdownFolder: `${__dirname}/plants/`, // optional
                  highlightClassName: 'highlight', // optional
              },
            },
            {
              resolve: `gatsby-remark-images`,
              options: {
                maxWidth: 450,
              },
            },
            {
              resolve: `gatsby-remark-responsive-iframe`,
              options: {}
            },
            {
              resolve: `gatsby-remark-katex`,
              options: {
                // Add any KaTeX options from https://github.com/KaTeX/KaTeX/blob/master/docs/options.md here
                strict: `ignore`
              }
            },
            // {
            //   resolve: `gatsby-remark-shiki`,
            //   options: {
            //     //theme: 'zeit', // Default: 'nord'
            //   },
            // },
          )
          return defaultPluginMdx
        },
      },
    },
    `gatsby-plugin-react-helmet`,
    `gatsby-plugin-image`,
    {
      resolve: `gatsby-source-filesystem`,
      options: {
        name: `images`,
        path: `${__dirname}/plants/assets/images`,
      },
    },
    `gatsby-transformer-sharp`,
    {
      resolve: `gatsby-plugin-manifest`,
      options: {
        name: `Atiq Ur-Rehman`,
        short_name: `Atiq`,
        start_url: `/`,
        // This will impact how browsers show your PWA/website
        // https://css-tricks.com/meta-theme-color-and-trickery/
        // theme_color: `#663399`,
        display: `minimal-ui`,
        icon: `src/images/logo.png`, // This path is relative to the root of the site.
      },
    },
    // this (optional) plugin enables Progressive Web App + Offline functionality
    // To learn more, visit: https://gatsby.dev/offline
    // `gatsby-plugin-offline`,
  ],
}
